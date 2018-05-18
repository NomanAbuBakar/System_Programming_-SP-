# Pagination has not been handled in this Task as I've Disscussed with Sir in that my Browser is not showing the Pagination of Objective Site so that's Sir has been Compensated me that criteria.
import requests
from bs4 import BeautifulSoup

# it'll hit the Site to give corresponding URL with passed WORD and if found then return the URL
def hit_News_Page(url, wrd):
	req = requests.get(url)
	if req.status_code == 200:
		parser_obj = BeautifulSoup(req.content, "html.parser")
		p_tag_list = parser_obj.find_all("p")
		stringList_from_p_tags = []
		web_content = ""
		for p in p_tag_list:
			web_content = web_content + str(p.text.encode('utf-8').strip())
		if wrd in web_content:
			return url
	return None

# Taking User Input
entered_word = raw_input("Please Enter Keyword for News To be Searched : ")

# URL to Hit ...
URL = 'https://propakistani.pk/'
req = requests.get(URL)

# Checking if Web hit Successfully ...
if req.status_code == 200:
	parser_obj = BeautifulSoup(req.content, "html.parser")
	a_tag_list = parser_obj.find_all("a")
	p_tag_list = parser_obj.find_all("p")

# Getting References to All Current News
news_url_to_hit = []
for p in p_tag_list:
	if p is not None:
		if p.a is not None:
			if p.a['href'] is not None:
				news_url_to_hit.append(str(p.a['href']))

# Getting Result's URL 
resulted_url = []
for url in news_url_to_hit:
	if hit_News_Page(url,entered_word) is not None:
		print(hit_News_Page(url,entered_word))
		resulted_url.append(hit_News_Page(url,entered_word))
