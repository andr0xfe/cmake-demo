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
static void __attribute__ ((constructor)) _load(void){
    // Add initialization code…
    std::cout<<"module wars loaded";
}
 
// Called when the library is unloaded and before dlclose()
// returns
static void  __attribute__ ((destructor)) _unload(void){
    // Add clean-up code…
    std::cout<<"module wanna unloaded";
}
