#include <string>
#include "ToolChain.h"
#include "DummyTool.h"

int main(int argc, char* argv[]){

  std::string conffile;
  if (argc==1)conffile="configfiles/Dummy/ToolChainConfig";
  else conffile=argv[1];

  ToolChain tools(conffile, argc, argv);

  
  return 0;
  
}
