void searching_student_information()
{

    printf("\n\t==>SEARCH ACCORDING TO NAME PLEASE ENTER 1 : \n");
    printf("\t==>SEARCH ACCORDING TO PHONE NUMBER PLEASE ENTER 2 : \n");
    printf("\t==>SEARCH ACCORDING TO ROLL PLEASE ENTER 3 : \n");
    printf("\t==>SEARCH ACCORDING TO DEPARTMENT PLEASE ENTER 4 : \n\n");
    printf("\tCHOICE YOUR SEARCH OPTION: ");
    int sea;
    scanf("%d",&sea);
    switch (sea)
    {
        case 1:
            name();
            break;
        case 2:
            phone();
            break;
        case 3:
            roll();
            break;
        case 4:
            department();
            break;
        default :
            break;

    }
}

