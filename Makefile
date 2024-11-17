.PHONY: print status

COPIES:=1
URI:=ipp://laserjet.hacklab/printers/laserjet

print: membership_form.ps
	ipptool -v -d filename=$< -d copies=$(COPIES) $(URI) print-job-a4.ipp

membership_form.ps: membership_form.pdf
	pdf2ps $< $@

membership_form.pdf: FORCE
	wget -N https://wiki.ehlab.uk/_media/membership_form.pdf -P tmp
	cmp tmp/$@ $@ || cp -a tmp/$@ $@

FORCE:
