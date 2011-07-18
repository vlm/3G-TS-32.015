
CPPFLAGS += -DPDU=CallEventRecord -DHAVE_CONFIG_H
CFLAGS += -I.

all: 
	$(CC) -o convert $(CFLAGS) $(CPPFLAGS) *.c

regen: regenerate-from-asn1-source

regenerate-from-asn1-source:
	asn1c -fskeletons-copy -fnative-types -fcompound-names ../cdr.asn1

