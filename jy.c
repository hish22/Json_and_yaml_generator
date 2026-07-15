/*
Made by
    Hisham Aljughaymain
    Saif Alobaisi
    osama Awadh

*/

#include <stdio.h>

void json_generator() {
    FILE *json_file = fopen("data.json","w");

    if (!json_file) return;

    fprintf(json_file,"{\n");
    fprintf(json_file,"  \"name\" : \"hisham\",\n");
    fprintf(json_file,"  \"age\"  : 24,\n");
    fprintf(json_file,"  \"hobbies\"  : [\"programming\",\"football\"]\n");
    fprintf(json_file,"}");

    fclose(json_file);
}

void yaml_generator() {
    FILE *yaml_file = fopen("data.yaml","w");
    if(!yaml_file) return;
    fprintf(yaml_file,"invoice number: 32784\n");
    fprintf(yaml_file,"name : Osama\n");
    fprintf(yaml_file,"address : Arar\n");
    fclose(yaml_file);


}

int main(void) {
    json_generator();
    yaml_generator();

    return 0;
}