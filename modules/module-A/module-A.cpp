#include <iostream>
#include <module-A.h>
int main(){
    std::cout<<"hello,world!";
}

void  sayhello(){
     std::cout<<"hello,world!";
}

static void static_sayhello(){
      std::cout<<"hello,world!--static";
}



// Called when the library is loaded and before dlopen() returns
__attribute__ ((constructor)) static void _load(void){
    // Add initialization code…
    std::cout<<"module wars loaded";
}
 
// Called when the library is unloaded and before dlclose()
// returns
__attribute__ ((destructor)) static void _unload(void){
    // Add clean-up code…
    std::cout<<"module wanna unloaded";
}
