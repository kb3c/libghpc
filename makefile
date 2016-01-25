prepare:
	@gunzip --force -k 0.1/libghpc*.gz
	@echo ""
	@echo "NOW DO: $ ln 1.1/libghpc-armhf-x.a libghpc.a"
	@echo "where"
	@echo "        <version>/libgh-<arch>-<platform>.a"
	@echo ""
	@echo "for easy linking. You don't HAVE to..."
	@echo ""


