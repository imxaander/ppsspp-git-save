#include <iostream>
#include <git2.h>

int import_save(git_repository** out, const char* save_url){
    int clone_error = git_clone(out, save_url, "./memstick/", NULL);
    return clone_error;
}


int main(){
    git_libgit2_init();
    
    git_repository** repo;
    const char* save_git_repo = "https://github.com/imxaander/ppsspp-git-save.git";
    if(import_save(repo, save_git_repo) < 0){
        printf("\nGit error: %s\n", git_error_last);    
    }
    git_repository_free(*repo);
    git_libgit2_shutdown();
}