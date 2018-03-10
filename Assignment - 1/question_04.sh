#!/bin/bash
file=$1
echo `cat $file|sort|uniq`
