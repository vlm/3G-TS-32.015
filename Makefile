
all:
	make -C src
	@echo "Usage: src/converter <filename.fin>"

archive:
	git archive --prefix "3gts/" HEAD  | gzip > 3gts.tgz

