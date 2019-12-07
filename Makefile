


sh:sh.c
	gcc sh.c -o sh 2>&1 | head

simple.sh:_simple.sh.c
	gcc _simple.sh.c -o simple.sh 2>&1 | head
