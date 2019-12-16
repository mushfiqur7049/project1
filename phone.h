void phone()
{
    struct student x;
    char pho[100];
    FILE *ft;
    ft=fopen("students.txt","r");
    printf("\n\tSEARCHING ACCORDING TO PHONE NUMBER: ");
    scanf("%s",pho);
    int test;
    while(fscanf(ft,"%s %s %s %s %f %s %s %s %s %s ",x.name,x.versity,x.department,x.roll,&x.result,x.b.fname,x.b.mname,x.b.byear,x.a.city,x.a.phone)!=EOF)
{
    test=9;
    if(strcmp(pho,x.a.phone)==0)
    {
        printf("\n\n\n\n\t**!!**!!Student name: %s",x.name);
         printf("\n\t**!!**!!Versity name: %s",x.versity);
         printf("\n\t**!!**Department name: %s",x.department);
         printf("\n\t**!!**Roll No: %s",x.roll);
         printf("\n\t**!!**Result: %f",x.result);
         printf("\n\t**!!**Father name: %s",x.b.fname);
         printf("\n\t**!!**Mother name: %s",x.b.mname);
         printf("\n\t**!!**Birth year: %s",x.b.byear);
         printf("\n\t**!!**Present address: %s",x.a.city);
         printf("\n\t**!!**Contact number: %s",x.a.phone);
         break;
    }
    else
        test++;
}
    if(test!=9){
        printf("\n\tSORRY!!!! THE DATA WAS NOT FOUND.PLEASE TRY AGAIN");
    }

    fclose(ft);
    printf("\n\n\tCHOICE OPTION 2 FOR MAIN MUNU: ");
    int k;
    scanf("%d",&k);
    switch (k)
        {
        case 2:
            main();
            break;
        default :
            break;

        }

}

