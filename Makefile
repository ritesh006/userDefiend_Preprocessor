a.out:	main.o headerFileReplace.o comment_removal.o
	cc main.o headerFileReplace.o comment_removal.o
main.o:	main.c
	cc -c main.c
headerFileReplace.o:	headerFileReplace.c
	cc -c headerFileReplace.c
comment_removal.o: comment_removal.c
	cc -c comment_removal.c
