#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// made by randomnerd41 - FOSS - v 1.0
// im new to C so the code might be janky! sorry!

int main() {
    printf("doIT - apt tool that cleens autoremoves updates upgrades fixes and more!\n");
    printf("to be used on borken or janky systems that need a little help! !!i am not at fault for any lost files or harm\n");
    printf("done to your pc!! for debian based systems only! starting in 12 seconds!!!\n");
    sleep(12);
    system("sudo apt update -y && sudo apt full-upgrade -y && sudo apt autoclean -y && sudo apt autoremove --purge && sudo apt --fix-broken install -y");
    system("sudo dpkg --configure -a -y");
    system("clear");
    printf("all done! exiting...\n");
    sleep(3);
    exit(0);

}

    
