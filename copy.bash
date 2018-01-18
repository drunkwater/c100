#!/bin/bash

# @filename           :  copy.bash
# @author             :  Copyright (C) drunkwater
# @date               :  Tue Jan 16 12:59:51 HKT 2018
# @function           :  
# @see                :  
# @require            :  

EX_OK=0

i=1
#while [ $i -le 100 ]
#do
#	suffix=`printf %03d $i`
#	dir='c'$suffix
#
#	echo "copy c000 to $dir"
#	cp -fr c000 $dir
#	mv -f $dir/c100_000.c $dir/c100_$suffix.c
#	mv -f $dir/new_c100_000.c $dir/new_c100_$suffix.c
#	sed s/000/$suffix/g -i $dir/Makefile
#	echo -e "$dir done\n"
#
#	i=$(($i+1))
#done

exit $EX_OK
