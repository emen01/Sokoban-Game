#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int width, height;
int width = 10;
int height = 10;


void map_cordinates (int boxes, int stor_squares)	// enter map cordinates
{
system ("map_cordinates");
char name;
printf ("Enter the map name:");
scanf ("%s", &name);
printf ("Enter the amount of boxes : \n");
scanf ("%d", &boxes);
printf ("Enter the number of sotrage squares: \n");
scanf ("%d", &stor_squares);
};


char map[] = { // draw map
    "##########\n"
    "#P       #\n"
    "#  #B    #\n"
    "#  #A    #\n"
    "#  ###  A#\n"
    "#   A#  B#\n"
    "#  B##   #\n"
    "#        #\n"
    "#A     B #\n"
    "##########\n"
};

int* memoryAllocation (int*** map, int width, int height) { // allocate memory for the map size
  *map = (int**)malloc(width * sizeof(int*));
  int *map_data = malloc( width * height * sizeof(int));
  for(int i=0; i<width; i++)
     (*map)[i] = map_data + i * height ;
  return map_data;
}

void memoryDeallocation(int*** map, int* map_data){ //// deallocate memory for the map size
    free(map_data);
    free(*map);
}

void PlayerPosition(int *Xp, int *Yp) // determining the player position by (x,y) cordinates (which col and row)compared to the width and height of the map
    {
        int row,col;
        if (row < width)
            *Xp = row;
        if ( col < height)
            *Yp = col;
       };


void SqauresPosition (int A) // determining the storage squares position
    {
char * strchr( const char * map, int A);

       };


void boxesPosition (int B) // determining the boxes position
    {
   char * strchr( const char * map, int B);
       };


void count (int *count) // counting how many boxes are in the storage squares or the right squares
{
int boxes();
int stor_squares();

count = 0;
        for(int i = 0; i < 0; i++)
    {
   if ( boxes == stor_squares );

  count= count +  1;

    }
  };

enum direction { LEFT, RIGHT, UP, DOWN };	// move the character : enumarated type
typedef enum direction direction;
enum direction keyMap = LEFT;
enum direction read_direction (char keyMap)
{
// char keyMap;
//scanf ("%c", &keyMap);
switch (keyMap)
{
case 'Q': return LEFT;		// move character to the left
case 'D': return RIGHT;		// move character to the right
case 'Z': return UP;			// move character up
case 'S': return DOWN;			// move character down
}
return keyMap;		// left by default
};


int main()
{

    int width, height;
    int count;
    int A,B;
    int boxes, stor_squares;
    int Xp, Yp;
    FILE *fp;
    int status;
    char name;
   int * ptr;

printf ("Enter the map name:");
scanf ("%s", &name);
printf ("Enter the amount of boxes : \n");
scanf ("%d", &boxes);
printf ("Enter the number of sotrage squares: \n");
scanf ("%d", &stor_squares);


    fp = fopen("file", "w");  // file open /
    if (fp == NULL)
        return 1;
    fprintf(fp , "WELCOME TO THE SOKOBAN GAME\n");
    fprintf(fp , "Start the game by entering the size of the map(width and height)\n");
 fputs("The width of the map is 10 :\n", fp);
   fputs("The height of the map is 10 :\n", fp);
     fputs("The name of the map is &name :\n", fp);
     fputs("The amount of boxes is &boxes : \n", fp);
fputs("The number of sotrage squares is &stor_squares : \n", fp);

    status = fclose(fp);      // close file
    if (status != 0)
        return 1;

printf("%s\n", map);

    while(1)
{
scanf ("%c", &keyMap);
direction D = read_direction(keyMap);
printf("%c\n", keyMap);
printf("%s\n", map);
if (D == RIGHT)


        count = 0;

        for(int i = 0; i < 10; i++)
        {
           if( A == B)
		printf("you win.\n");

        }

   }

    return 0;
    }
