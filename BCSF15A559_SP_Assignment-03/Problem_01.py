import requests
from PIL import Image
from bs4 import BeautifulSoup
from StringIO import StringIO
import os
import sys
import time

# Function to get all the names of Qari Sahibaans
def Qari_Shbs_Names(URL):
	req = requests.get(URL)
	# List to Store Names ...
	names = []
	
	if req.status_code == 200:
		parser_obj = BeautifulSoup(req.content, "html.parser")
		anchor_tags = parser_obj.find_all("a")
		
		for name in anchor_tags:
			names.append(name.text)
	return names

# To Create Folder to Corresponding Qari Shb
def makeDir(dirr):
    try:
        if not os.path.exists(dirr):
            os.makedirs(dirr)
    except OSError:
        print ('Error: Could not Create this ' +  dirr)


count=1
proCount=0
url1='https://download.quranicaudio.com/quran/'
Qari_Names = Qari_Shbs_Names(url1)

total=len(Qari_Names)
Log_File = open("Log_File","w+")

st = str(time.strftime("%c"))+" "+"TOTAL QARI : "+str(total)
Log_File.write(st)
Log_File.write("\n")

for Qari in Qari_Names:
	if count==1:
		count=count+1
		continue

	makeDir(Qari)
	os.chdir(Qari)
	url2=url1+Qari
	print(url2)
	file_list = Qari_Shbs_Names(url2)
	proCount=proCount+1

	st=str(time.strftime("%c"))+" "+"START PROCESSING : "+str(proCount)+"out of "+str(total)
	Log_File.write(st)
	Log_File.write("\n")

	st=str(time.strftime("%c"))+" "+"QARI NAME : "+str(Qari)
	Log_File.write(st)
	Log_File.write("\n")	

	for filee in file_list[-26:]:

		url3=url2+filee
		print(url3)

		st=str(time.strftime("%c"))+" "+"QARI NAME : "+str(Qari)+" "+"FILENAME : "+str(filee)+"START"
		Log_File.write(st)
		Log_File.write("\n")

		r=requests.get(url3)
		with open(filee,"web") as code:
			code.write(r.content)
	
		st=str(time.strftime("%c"))+" "+"QARI NAME : "+str(Qari)+" "+"FILENAME : "+str(filee)+"END"
		Log_File.write(st)
		Log_File.write("\n")

	st=str(time.strftime("%c"))+" "+"MERGING FILE OF QARI NAME : "+str(Qari)+" "+"START"
	Log_File.write(st)
	Log_File.write("\n")
			
	os.system("mp3wrap MERGED.mp3 *.mp3")
			
	st=str(time.strftime("%c"))+" "+"MERGING FILE OF QARI NAME : "+str(Qari)+" "+"END"
	Log_File.write(st)
	Log_File.write("\n")

	os.chdir("../")
