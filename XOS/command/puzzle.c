#include "stdio.h"
#include "string.h"

#define WIDTH 20    // 宽也即列数  分5组，每组4个
#define HEIGHT 12   // 高也即行数   分4组，每组3个
#define CHAR "*"  
#define GROUPCNT 16  
#define ROW 3  
#define COL 5 
#define NULL 0 

char keys[128];
int r;

int Modal[HEIGHT][WIDTH] =  // 定义形状的模板
{
	{ '-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' },
	{ '-','-','*','*','*','*','*','*','*','-','-','-','-','-','*','*','*','*','*','*' },
	{ '-','*','*','*','-','-','-','*','*','*','-','-','-','-','*','*','*','*','*','*' },
	{ '*','*','*','-','-','-','-','-','*','*','*','-','-','*','*','*','-','-','-','*'},
	{ '*','*','-','-','-','-','-','-','-','*','*','-','-','*','*','*','-','-','-','*'},
	{ '*','*','-','-','-','-','-','-','-','*','*','-','-','-','*','*','*','*','*','-'},
	{ '*','*','-','-','-','-','-','-','-','*','*','-','-','-','*','*','*','*','*','*'},//
	{ '*','*','-','-','-','-','-','-','-','*','*','-','-','-','-','-','-','*','*','*' },
	{ '*','*','-','-','-','-','-','-','-','*','*','-','*','*','-','-','-','-','-','*' },
	{ '*','*','*',' ','-','-','-','-','*','*','*','-','*','*','*','-','-','-','-','*' },
	{ '-','*','*','*','*','-','-','*','*','*','-','-','-','*','*','*','*','*','*','*' },
	{ '-','-','*','*','*','*','*','*','*','-','-','-','-','-','*','*','*','*','*','-' },
};
//计算每一组的组坐标（row行，col列）
void groupStart(int* row, int* col,int rowLen,int colLen,int groupNum)
{
	*col = groupNum%(WIDTH/colLen) ;
	*row = colLen*groupNum/WIDTH;
}

void ClearArr(char *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
        arr[i] = 0;
}



void print_group(int group[ROW][COL], int row, int col);

//原modal分为row个每行col个每列的一堆小图形块
int*** toGroups(int groups[GROUPCNT][ROW][COL],int** modal,int row,int col)
{
	if (WIDTH%col != 0)return NULL;
	if (HEIGHT%row != 0)return NULL;
	int groupCnt = (WIDTH*HEIGHT) / (row*col);
	int temp = 0, temp2 = 0;
	int *r = &temp, *c = &temp2;
	int i, j, k;
	//int*** groups = (int***)malloc(sizeof(int**)*groupCnt);//动态分组
	//for (i = 0; i < groupCnt; i++)
	//{
	//	groups[i] = (int**)malloc(sizeof(int*)*row);
	//	for (j = 0; j < row; j++)
	//	{
	//		groups[i][j] = (int*)malloc(sizeof(int)*col);
	//	}
	//}

	for (i = 0; i < groupCnt; i++)
	{
		groupStart(r, c, row, col, i);
		for (j = 0; j < row; j++)
		{
			for (k = 0; k < col; k++)
			{
				if (i == 10)
				{
					int biaus=0;
					biaus += biaus;
				}
				groups[i][j][k] = Modal[(*r)*row + j][(*c)*col + k];

				//清空最后一行第一组数据
				if ((*r) == (HEIGHT/row)-1 && (*c) == 0)
				{
					groups[i][j][k] = ' ';
					Modal[(*r)*row + j][(*c)*col + k] = ' ';
				}
			}
		}
	}
	/*for (int i = 0; i < groupCnt; i++)
	{
		print_group(groups[i], row, col);
	}*/
	

	return groups;
}

////释放内存
//void freeGroup(int*** group,int row,int col)
//{
//	int i, j;
//	for (i = 0; i < (WIDTH*HEIGHT) / (row*col); i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			free(group[i][j]);
//		}
//		free(group[i]);
//	}
//	free(group);
//}

//输出新组 返回是否拼图成功
int printGroups(int groups[GROUPCNT][ROW][COL],int row,int col)
{
	int *r = NULL, *c = NULL;
	int temp = 0, temp2 = 0;
	r = &temp, c = &temp2;
	int newModal[HEIGHT][WIDTH] = { 0 };
	int i, j, k;
	for (i = 0; i < (WIDTH*HEIGHT) / (row*col); i++)
	{
		groupStart(r, c, row, col, i);
		for (j = 0; j < row; j++)
		{
			for (k = 0; k < col; k++)
			{
				newModal[(*r)*row + j][(*c)*col + k] = groups[i][j][k];
			}
		}
	}
	int matchCnt = 0;
	for (i = 0; i < HEIGHT; i++)
	{
		for (j = 0; j < WIDTH; j++)
		{
			printf("%c", newModal[i][j]);
			if (newModal[i][j] == Modal[i][j])matchCnt++;
		}
		printf("\n");
	}
	if (matchCnt == HEIGHT*WIDTH) {
		return 1;
	}
	else return 0;
}

//交换组元素  
void swapGroup(int groupA[ROW][COL], int groupB[ROW][COL],int row,int col)
{
	int temp;
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			temp = groupA[i][j];
			groupA[i][j] = groupB[i][j];
			groupB[i][j] = temp;
		}
	}
}

//void print_group(int**group, int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j ++ )
//		{
//			printf("%c", group[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("\n");
//}

//移动小组，成功返回1，失败返回0，不移动
void move(int groups[GROUPCNT][ROW][COL],int *blankNum, char dir[128],int row,int col)
{
	int temp[2] = { 0 };
	int *r = temp, *c = temp + 1;
	groupStart(r, c, row, col, *blankNum);
	if (*c > 0 && strcmp(dir,"a")==0)//向左移动空
	{
		swapGroup(groups[*blankNum], groups[(*blankNum)-1], row, col);
		--(*blankNum);
	}
	else if (*c < WIDTH/col-1 && strcmp(dir,"d")==0)//向右移动空
	{
		swapGroup(groups[*blankNum], groups[(*blankNum)+1], row, col);
		++(*blankNum);
	}
	else if (*r <  HEIGHT / row - 1 && strcmp(dir,"s")==0)//向下移动空
	{
		swapGroup(groups[*blankNum], groups[(*blankNum)+WIDTH/col], row, col);
		(*blankNum) = (*blankNum) + WIDTH / col;
	}
	else if (*r >0 && strcmp(dir,"w")==0)//向上移动空
	{
		swapGroup(groups[*blankNum], groups[(*blankNum) - WIDTH / col], row, col);
		(*blankNum) = (*blankNum) - WIDTH / col;
	}
	else printf("\ninvalid input!\n");
}

int main()
{
	int i, j;
	//srand(time(0));//随机数种子
	int row=ROW, col=COL;//改变分组大小  宽分4组，每组5个   高分4组，每组3个
	int groupCnt = (WIDTH*HEIGHT) / (row*col);//分组数量 16组
	int blankGroup = groupCnt-(WIDTH/col);//左下角空白区组号
	//int start = rand() % groupCnt ;//生成随机数
	int start = 4;
	int rGroup;
	printf("Original pic:\n");
	for (i = 0; i<HEIGHT; i++)  // 控制高度即行数
	{
		for (j = 0; j<WIDTH; j++)  // 控制宽度即列数
		{
			//if (Modal[i][j])  // 根据模板输出*号或空格
			//	printf(CHAR);
			//else
			//	printf(" ");
			printf("%c",Modal[i][j]);
		}
		printf("\n");
	}
	//int*** groups = toGroups(Modal, row, col);//动态分组
	int groups[GROUPCNT][ROW][COL] = { 0 };
	toGroups(groups, Modal, 3, 5);
	if (groups != NULL)
	{
		
		
		//swapGroup(groups[blankGroup], groups[blankGroup + 1], row, col);
		int cont = 2;
		//拼图未完成时循环
		while (cont>0)
		{
			if (cont == 2)
			{
				int i, j;
				//打乱顺序
				for (i = 0; i < groupCnt / 2; i++)
				{
					if (start == blankGroup || ((start + i) % groupCnt) == blankGroup)
					{
						start = start + 2;
						continue;
					}
					
					swapGroup(groups[start], groups[(start+i)%groupCnt],row,col);
				}
				cont = 1;

				printf("Move the empty part in the bottom left corner to recover the pic\n");
				printGroups(groups, row, col);
			}
			printf("Up(w) Down(s) Left(a) Rght(d) Quit(q)\n");
			ClearArr(keys, 128);
            r = read(0, keys, 128);
			printf("\n");
			if (strcmp(keys,"q")==0) {
				printf("Bye~~\n");
				break;
			}
			//移动
			move(groups, &blankGroup, keys, row, col);
			if (printGroups(groups, row, col) == 1)
			{
				printf("Congratulations!You win!Continue?(Y/N)");
				ClearArr(keys, 128);
            	r = read(0, keys, 128);
				printf("\n");
				if (strcmp(keys,"y")==0 || strcmp(keys,"Y")==0)
				{
					cont = 2;
				}
				else {
					cont = 0;
				}
			}
		}
		//freeGroup(groups, row, col);//动态分组
	}
	return 0;
}