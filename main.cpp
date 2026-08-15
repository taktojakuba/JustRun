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
  setenv("justrun-render", "__NV_PRIME_RENDER_OFFLOAD=1", 1);
  setenv("justrun-optimus", "__VK_LAYER_NV_optimus=NVIDIA_only
", 1);
  setenv("justrun-glx", "__GLX_VENDOR_LIBRARY_NAME=nvidia
", 1);
    // replace justrun with argv2 proc
    execvp(argv[1], &argv[1]);
    return 0;
}
