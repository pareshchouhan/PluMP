build: src/main.o
	mkdir -p bin
	g++ -o bin/plump src/*.o -lpulse-simple -lpulse -L/usr/lib/pulse-10.0/modules -lprotocol-simple -lalsa-util -lcli -loss-util -lprotocol-cli -lprotocol-http -lprotocol-native -lrtp -lwebrtc-util
	rm src/*.o
