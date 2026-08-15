#include <cstdlib>
#include <unistd.h>

using namespace std;

int main(int argc, cahr* argv[])
{
  //check argc
  if(argc < 2){
    cout << "justrun proc/name/to/run" << endl;
    return 1;
  }
  //set envs 
  // __NV_PRIME_RENDER_OFFLOAD=1
  // __VK_LAYER_NV_optimus=NVIDIA_only
  // __GLX_VENDOR_LIBRARY_NAME=nvidia
  setenv("MY_VAR", "Hello, World!", 1);
}
