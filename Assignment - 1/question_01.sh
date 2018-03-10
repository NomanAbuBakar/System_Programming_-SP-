#!/bin/bash


set `ls | grep *.mp4`

for i in $@;
do
	if [ -d "Mp4" ]
	then
	{
		`mv $i Mp4`
	}
	else
	{
		`mkdir "Mp4"`
		`mv $i Mp4`
	}
	fi
done


set `ls | grep *.txt`
for i in $@;
do
	if [ -d "Txt" ]
	then
	{
		`mv $i Txt`
	}
	else
	{
		`mkdir "Txt"`
		`mv $i Txt`
	}
	fi
done

set `ls | grep *.mp3`

for i in $@;
do
	if [ -d "Mp3" ]
	then
	{
		`mv $i Mp3`
	}
	else
	{
		`mkdir "Mp3"`
		`mv $i Mp3`
	}
	fi
done

set `ls | grep *.doc`

for i in $@;
do
	if [ -d "Doc" ]
	then
	{
		`mv $i Doc`
	}
	else
	{
		`mkdir "Doc"`
		`mv $i Doc`
	}
	fi
done
