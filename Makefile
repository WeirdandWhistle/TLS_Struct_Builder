c = gcc
target = main

hFiles = $(shell find *.h)
cFiles = $(subst .h,.c, $(hFiles))
oFiles = $(subst .c,.o, $(cFiles))

.SECONDARY: $(cFiles)

$(target) : $(oFiles)
	$(c) $(oFiles) -o $(target)


%.o : %.c
	$c -c -o $@ $<

%.c : %.h
	python build.py --file $<


clean: 
	rm $(oFiles)
	python build.py --clean
