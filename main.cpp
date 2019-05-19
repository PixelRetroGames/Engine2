#include "ENGINE/Engine.h"
#include "SANDBOX/include/Test_state.h"

#include <cstdio>

int main( int argc, char *args[] )
{
 Engine::Application app("sq test",800,600,0,"res/icon.png");
 app.Init();

 Sandbox::Test_state *sq=new Sandbox::Test_state(&app);

 app.Change_state(sq);

 app.Run();

 app.Close();

 return 0;
}
