#!/bin/bash

# @filename           :  clean.bash
# @author             :  Copyright (C) drunkwater
# @date               :  Tue Jan 16 12:59:51 HKT 2018
# @function           :  
# @see                :  
# @require            :  

EX_OK=0

work_dir=`pwd`

i=0

while [ $i -le 100 ]
do
	suffix=`printf %03d $i`
	dir='c'$suffix

	echo "cd $dir"
	cd $dir
	make clean
	rm -f test
	echo -e "$dir done\n"
	cd $work_dir

	i=$(($i+1))
done

exit $EX_OK
