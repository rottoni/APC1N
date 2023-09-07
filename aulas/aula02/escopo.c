#include <stdio.h>

int global = 10; //essa variável atua no código todo, é global


int main (){
  int local = 20; //essa variável só atua entre as chaves do "int main"

  {
    int local = 50; //essa variável só atua entre as chaves dentro das chaves do "int main"
    // mesmo tendo o mesmo nome da anterior, por atuar em chaves diferentes, são consideradas distintas 

    {
      int local = 100; //essa variável é distinta das duas anteriores
      
    }
    
  }
 
  return 0;
}