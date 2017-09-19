#include "stdio.h"
#include "string.h"

char a[6][12] = {"       ","  __ _ "," / _` |","| (_| |"," \\__,_|","       "};
	char b[6][12] = {" _     ","| |__  ","| '_ \\ ","| |_) |","|_.__/ ","       "};
	char c[6][12] = {"      ","  ___ "," / __|","| (__ "," \\___|","       "};
	char d[6][12] = {"     _ ","  __| |"," / _` |","| (_| |"," \\__,_|","       "};
	char e[6][12] = {"      ","  ___ "," / _ \\","|  __/"," \\___|","      "};
	char f[6][12] = {"  __ "," / _|","| |_ ","|  _|","|_|  ","     "};
	char g[6][12] = {"       ","  __ _ "," / _` |","| (_| |"," \\__, |"," |___/ "};
	char h[6][12] = {" _     ","| |__  ","| '_ \\ ","| | | |","|_| |_|","       "};
	char i[6][12] = {" _ ","(_)","| |","| |","|_|","   "};
	char j[6][12] = {"   _ ","  (_)","  | |","  | |"," _/ |","|__/ "};
	char k[6][12] = {" _    ","| | __","| |/ /","|   < ","|_|\\_\\","      "};
	char l[6][12] = {" _ ","| |","| |","| |","|_|","   "};
	char m[6][12] = {"           "," _ __ ___  ","| '_ ` _ \\ ","| | | | | |","|_| |_| |_|","           "};
	char n[6][12] = {"       "," _ __  ","| '_ \\ ","| | | |","|_| |_|","       "};
	char o[6][12] = {"       ","  ___  "," / _ \\ ","| (_) |"," \\___/ ","       "};
	char p[6][12] = {"       "," _ __  ","| '_ \\ ","| |_) |","| .__/ ","|_|    "};
	char q[6][12] = {"       ","  __ _ "," / _` |","| (_| |"," \\__, |","    |_|"};
	char r[6][12] = {"      "," _ __ ","| '__|","| |   ","|_|   ","      "};
	char s[6][12] = {"     "," ___ ","/ __|","\\__ \\","|___/","     "};
	char t[6][12] = {" _   ","| |_ ","| __|","| |_ "," \\__|","     "};
	char u[6][12] = {"       "," _   _ ","| | | |","| |_| |"," \\__,_|","       "};
	char v[6][12] = {"       ","__   __","\\ \\ / /"," \\ V / ","  \\_/  ","       "};
	char w[6][12] = {"          ","__      __","\\ \\ /\\ / /"," \\ V  V / ","  \\_/\\_/  ","          "};
	char x[6][12] = {"      ","__  __","\\ \\/ /"," >  < ","/_/\\_\\","      "};
	char y[6][12] = {"       "," _   _ ","| | | |","| |_| |"," \\__, |"," |___/ "};
	char z[6][12] = {"     "," ____","|_  /"," / / ","/___|","     "};
	char A[6][12] = {"    _    ","   / \\   ","  / _ \\  "," / ___ \\ ","/_/   \\_\\","         "};
	char B[6][12] = {" ____  ","| __ ) ","|  _ \\ ","| |_) |","|____/ ","       "};
	char C[6][12] = {"  ____ "," / ___|","| |    ","| |___ "," \\____|","       "};
	char D[6][12] = {" ____  ","|  _ \\ ","| | | |","| |_| |","|____/ ","       "};
	char E[6][12] = {" _____ ","| ____|","|  _|  ","| |___ ","|_____|","       "};
	char F[6][12] = {" _____ ","|  ___|","| |_   ","|  _|  ","|_|    ","       "};
	char G[6][12] = {"  ____ "," / ___|","| |  _ ","| |_| |"," \\____|","       "};
	char H[6][12] = {" _   _ ","| | | |","| |_| |","|  _  |","|_| |_|","       "};
	char I[6][12] = {" ___ ","|_ _|"," | | "," | | ","|___|","     "};
	char J[6][12] = {"     _ ","    | |"," _  | |","| |_| |"," \\___/ ","       "};
	char K[6][12] = {" _  __","| |/ /","| ' / ","| . \\ ","|_|\\_\\","      "};
	char L[6][12] = {" _     ","| |    ","| |    ","| |___ ","|_____|","       "};
	char M[6][12] = {" __  __ ","|  \\/  |","| |\\/| |","| |  | |","|_|  |_|","        "};
	char N[6][12] = {" _   _ ","| \\ | |","|  \\| |","| |\\  |","|_| \\_|","       "};
	char O[6][12] = {"  ___  "," / _ \\ ","| | | |","| |_| |"," \\___/ ","       "};
	char P[6][12] = {" ____  ","|  _ \\ ","| |_) |","|  __/ ","|_|    ","      "};
	char Q[6][12] = {"  ___  "," / _ \\ ","| | | |","| |_| |"," \\__\\_\\","       "};
	char R[6][12] = {" ____  ","|  _ \\ ","| |_) |","|  _ < ","|_| \\_\\","       "};
	char S[6][12] = {" ____  ","/ ___| ","\\___ \\ "," ___) |","|____/ ","       "};
	char T[6][12] = {" _____ ","|_   _|","  | |  ","  | |  ","  |_|  ","       "};
	char U[6][12] = {" _   _ ","| | | |","| | | |","| |_| |"," \\___/ ","       "};
	char V[6][12] = {"__     __","\\ \\   / /"," \\ \\ / / ","  \\ V /  ","   \\_/   ","         "};
	char W[6][12] = {"__        __","\\ \\      / /"," \\ \\ /\\ / / ","  \\ V  V /  ","   \\_/\\_/   ","            "};
	char X[6][12] = {"__  __","\\ \\/ /"," \\  / "," /  \\ ","/_/\\_\\","      "};
	char Y[6][12] = {"__   __","\\ \\ / /"," \\ V / ","  | |  ","  |_|  ","       "};
	char Z[6][12] = {" _____","|__  /","  / / "," / /_ ","/____|","      "};
	char tanhao[6][12] = {" _ ","| |","| |","|_|","(_)","   "};
	char wenhao[6][12] = {" ___ ","|__ \\","  / /"," |_| "," (_) ","     "};
	char douhao[6][12] = {"   ","   ","   "," _ ","( )","|/ "};
	char juhao[6][12] = {"   ","   ","   "," _ ","(_)","   "};
	char at[6][12] = {"   ____  ","  / __ \\ "," / / _` |","| | (_| |"," \\ \\__,_|","  \\____/ "};
	char jiahao[6][12] = {"       ","   _   "," _| |_ ","|_   _|","  |_|  ","       "};
	char jianhao[6][12] = {"       ","       "," _____ ","|_____|","       ","       "};
	char xinghao[6][12] = {"      ","__/\\__","\\    /","/_  _\\","  \\/  ","      "};
	char chuhao[6][12] = {"    __","   / /","  / / "," / /  ","/_/   ","      "};
	char fanchuhao[6][12] = {"__    ","\\ \\   "," \\ \\  ","  \\ \\ ","   \\_\\","      "};
	char maohao[6][12] = {"   "," _ ","(_)"," _ ","(_)","   "};
	char fenhao[6][12] = {"   "," _ ","(_)"," _ ","( )","|/ "};
	char danyinhao[6][12] = {" _ ","( )","|/ ","   ","   ","   "};
	char shuangyinhao[6][12] = {" _ _ ","( | )"," V V ","     ","     ","     "};
	char shugang[6][12] = {" _ ","| |","| |","| |","| |","|_|"};
	char xiaokuohaol[6][12] = {"  __"," / /","| | ","| | ","| | "," \\_\\"};
	char xiaokuohaor[6][12] = {"__  ","\\ \\ "," | |"," | |"," | |","/_/ "};
	char zhongkuohaol[6][12] = {" __ ","| _|","| | ","| | ","| | ","|__|"};
	char zhongkuohaor[6][12] = {" __ ","|_ |"," | |"," | |"," | |","|__|"};
	char dakuohaol[6][12] = {"   __","  / /"," | | ","< <  "," | | ","  \\_\\"};
	char dakuohaor[6][12] = {"__   ","\\ \\  "," | | ","  > >"," | | ","/_/  "};
	char qian[6][12] = {"  _  "," | | ","/ __)","\\__ \\","(   /"," |_| "};
	char jinghao[6][12] = {"   _  _   "," _| || |_ ","|_  ..  _|","|_      _|","  |_||_|  ","          "};
	char baifenhao[6][12] = {" _  __","(_)/ /","  / / "," / /_ ","/_/(_)","      "};
	char chengfang[6][12] = {" /\\ ","|/\\|","    ","    ","    ","    "};
	char yu[6][12] = {"  ___   "," ( _ )  "," / _ \\/\\","| (_>  <"," \\___/\\/","        "};
	char xiahuaxian[6][12] = {"       ","       ","       ","       "," _____ ","|_____|"};
	char xiaoyuhao[6][12] = {"  __"," / /","/ / ","\\ \\ "," \\_\\","    "};
	char dayuhao[6][12] = {"__  ","\\ \\ "," \\ \\"," / /","/_/ ","    "};
	char dengyuhao[6][12] = {"       "," _____ ","|_____|","|_____|","       ","       "};
	char jiangehao[6][12] = {" _ ","( )"," \\|","   ","   ","   "};
	char bolanghao[6][12] = {" /\\/|","|/\\/ ","     ","     ","     ","     "};
	char one[6][12] = {" _ ","/ |","| |","| |","|_|","   "};
	char two[6][12] = {" ____  ","|___ \\ ","  __) |"," / __/ ","|_____|","       "};
	char three[6][12] = {" _____ ","|___ / ","  |_ \\ "," ___) |","|____/ ","       "};
	char four[6][12] = {" _  _   ","| || |  ","| || |_ ","|__   _|","   |_|  ","        "};
	char five[6][12] = {" ____  ","| ___| ","|___ \\ "," ___) |","|____/ ","       "};
	char six[6][12] = {"  __   "," / /_  ","| '_ \\ ","| (_) |"," \\___/ ","       "};
	char seven[6][12] = {" _____ ","|___  |","   / / ","  / /  "," /_/   ","       "};
	char eight[6][12] = {"  ___  "," ( _ ) "," / _ \\ ","| (_) |"," \\___/ ","       "};
	char nine[6][12] = {"  ___  "," / _ \\ ","| (_) |"," \\__, |","   /_/ ","       "};
	char zero[6][12] = {"  ___  "," / _ \\ ","| | | |","| |_| |"," \\___/ ","       "};
void printRow(char ch,int row)
{
	int cc;
	switch(ch)
	{
		case ' ':
		printf("  ");
		break;
		case '?':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",wenhao[row][cc]);
		}
		break;
		case '!':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",tanhao[row][cc]);
		}
		break;
		case ',':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",douhao[row][cc]);
		}
		break;
		case '.':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",juhao[row][cc]);
		}
		break;
		case '@':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",at[row][cc]);
		}
		break;
		case '+':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",jiahao[row][cc]);
		}
		break;
		case '-':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",jianhao[row][cc]);
		}
		break;
		case '*':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",xinghao[row][cc]);
		}
		break;
		case '/':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",chuhao[row][cc]);
		}
		break;
		case '\\':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",fanchuhao[row][cc]);
		}
		break;
		case ':':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",maohao[row][cc]);
		}
		break;
		case ';':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",fenhao[row][cc]);
		}
		break;
		case '\'':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",danyinhao[row][cc]);
		}
		break;
		case '\"':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",shuangyinhao[row][cc]);
		}
		break;
		case '|':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",shugang[row][cc]);
		}
		break;
		case '(':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",xiaokuohaol[row][cc]);
		}
		break;
		case ')':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",xiaokuohaor[row][cc]);
		}
		break;
		case '[':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",zhongkuohaol[row][cc]);
		}
		break;
		case ']':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",zhongkuohaor[row][cc]);
		}
		break;
		case '{':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",dakuohaol[row][cc]);
		}
		break;
		case '}':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",dakuohaor[row][cc]);
		}
		break;
		case '$':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",qian[row][cc]);
		}
		break;
		case '#':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",jinghao[row][cc]);
		}
		break;
		case '%':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",baifenhao[row][cc]);
		}
		break;
		case '^':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",chengfang[row][cc]);
		}
		break;
		case '&':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",yu[row][cc]);
		}
		break;
		case '_':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",xiahuaxian[row][cc]);
		}
		break;
		case '<':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",xiaoyuhao[row][cc]);
		}
		break;
		case '>':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",dayuhao[row][cc]);
		}
		break;
		case '=':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",dengyuhao[row][cc]);
		}
		break;
		case '`':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",jiangehao[row][cc]);
		}
		break;
		case '~':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",bolanghao[row][cc]);
		}
		break;
		case '1':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",one[row][cc]);
		}
		break;
		case '2':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",two[row][cc]);
		}
		break;
		case '3':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",three[row][cc]);
		}
		break;
		case '4':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",four[row][cc]);
		}
		break;
		case '5':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",five[row][cc]);
		}
		break;
		case '6':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",six[row][cc]);
		}
		break;
		case '7':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",seven[row][cc]);
		}
		break;
		case '8':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",eight[row][cc]);
		}
		break;
		case '9':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",nine[row][cc]);
		}
		break;
		case '0':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",zero[row][cc]);
		}
		break;
		case 'a':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",a[row][cc]);
		}
		break;
		case 'b':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",b[row][cc]);
		}
		break;
		case 'c':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",c[row][cc]);
		}
		break;
		case 'd':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",d[row][cc]);
		}
		break;
		case 'e':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",e[row][cc]);
		}
		break;
		case 'f':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",f[row][cc]);
		}
		break;
		case 'g':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",g[row][cc]);
		}
		break;
		case 'h':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",h[row][cc]);
		}
		break;
		case 'i':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",i[row][cc]);
		}
		break;
		case 'j':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",j[row][cc]);
		}
		break;
		case 'k':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",k[row][cc]);
		}
		break;
		case 'l':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",l[row][cc]);
		}
		break;
		case 'm':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",m[row][cc]);
		}
		break;
		case 'n':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",n[row][cc]);
		}
		break;
		case 'o':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",o[row][cc]);
		}
		break;
		case 'p':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",p[row][cc]);
		}
		break;
		case 'q':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",q[row][cc]);
		}
		break;
		case 'r':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",r[row][cc]);
		}
		break;
		case 's':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",s[row][cc]);
		}
		break;
		case 't':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",t[row][cc]);
		}
		break;
		case 'u':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",u[row][cc]);
		}
		break;
		case 'v':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",v[row][cc]);
		}
		break;
		case 'w':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",w[row][cc]);
		}
		break;
		case 'x':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",x[row][cc]);
		}
		break;
		case 'y':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",y[row][cc]);
		}
		break;
		case 'z':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",z[row][cc]);
		}
		break;
		case 'A':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",A[row][cc]);
		}
		break;
		case 'B':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",B[row][cc]);
		}
		break;
		case 'C':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",C[row][cc]);
		}
		break;
		case 'D':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",D[row][cc]);
		}
		break;
		case 'E':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",E[row][cc]);
		}
		break;
		case 'F':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",F[row][cc]);
		}
		break;
		case 'G':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",G[row][cc]);
		}
		break;
		case 'H':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",H[row][cc]);
		}
		break;
		case 'I':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",I[row][cc]);
		}
		break;
		case 'J':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",J[row][cc]);
		}
		break;
		case 'K':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",K[row][cc]);
		}
		break;
		case 'L':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",L[row][cc]);
		}
		break;
		case 'M':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",M[row][cc]);
		}
		break;
		case 'N':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",N[row][cc]);
		}
		break;
		case 'O':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",O[row][cc]);
		}
		break;
		case 'P':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",P[row][cc]);
		}
		break;
		case 'Q':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",Q[row][cc]);
		}
		break;
		case 'R':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",R[row][cc]);
		}
		break;
		case 'S':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",S[row][cc]);
		}
		break;
		case 'T':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",T[row][cc]);
		}
		break;
		case 'U':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",U[row][cc]);
		}
		break;
		case 'V':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",V[row][cc]);
		}
		break;
		case 'W':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",W[row][cc]);
		}
		break;
		case 'X':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",X[row][cc]);
		}
		break;
		case 'Y':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",Y[row][cc]);
		}
		break;
		case 'Z':
		for(cc=0;cc<12;cc++)
		{
			printf("%c",Z[row][cc]);
		}
		break;
		default:break;
	}
}

int main(int argc, char * argv[])
{
	int aa,bb,cc;
	char result[100] = "\0";
	strcat(result,argv[1]);
	for(aa=2;aa<argc;aa++)
	{
		strcat(result," ");
		strcat(result,argv[aa]);
	}
	int size = strlen(result);
	int times;
	if(size % 10)
	{
		times = size/10+1;
	}
	else
	{
		times = size/10;
	}

	for(aa=0;aa<times;aa++)
	{
		for(bb=0;bb<6;bb++)
		{
			for(cc=aa*10;cc<(size>10?(aa==times-1?size:aa*10+10):size);cc++)
			{
				printRow(result[cc],bb);
			}
			printf("\n");
		}
	}
	return 0;
}
