void department()
{
    struct student x;
    char dpt[100];
    FILE *searching;
    searching=fopen("students.txt","r");
    printf("\n\tSEARCHING ACCORDING TO DEPARTMENT: ");
    scanf("%s",dpt);
    int test;
    while(fscanf(searching,"%s %s %s %s %f %s %s %s %s %s ",x.name,x.versity,x.department,x.roll,&x.result,x.b.fname,x.b.mname,x.b.byear,x.a.city,x.a.phone)!=EOF)
{
    test=7;
    if(strcmp(dpt,x.department)==0)
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

    }
    else
        test++;
}
    if(test!=7){
        printf("\n\tSORRY!!!! THE DATA WAS NOT FOUND.PLEASE TRY AGAIN");
    }

    fclose(searching);
    printf("\n\n\tCHOICE OPTION 7 FOR MAIN MUNU: ");
    int k;
    scanf("%d",&k);
    switch (k)
        {
        case 7:
            main();
            break;
        default :
            break;

        }

}


