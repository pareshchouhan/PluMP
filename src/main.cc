#include <iostream>
#include <pulse/pulseaudio.h>
#include <pulse/simple.h>
#include <pulse/sample.h>

int main(int argc, char **argv) {
  std::cout << "Hello World!";
  pa_simple *s;
  pa_sample_spec ss;

  ss.format = PA_SAMPLE_S16NE;
  ss.channels = 2;
  ss.rate = 44100;
  s = pa_simple_new(NULL,
		    "PluMP",
		    PA_STREAM_PLAYBACK,
		    NULL,
		    "Music",
		    &ss,
		    NULL,
		    NULL,
		    NULL);
  if( s == NULL ) {
    printf("Error : Failed \n");
    return -1;
  }
  printf("Success\n");
  return 0;
}
