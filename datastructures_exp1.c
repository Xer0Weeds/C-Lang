//Identify how arrays, linked lists, stacks, queues, trees, and graphs are represented in memory and used by algorithms.//
       


#include <stdio.h>
int a[4],n, elem, i, pos;
void create()
{
    printf("\nEnter the size of the array elements:");
    scanf("%d", &n);
    printf("\nEnter the elements for the array:\n");
    for (i = 0; i < n; i++);
    scanf("%d", &a[i]);
}
void display()
{
    int i;
    printf("\nThe array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void insert()
{
    printf("\nEnter the position for the new element: ");
    scanf("%d", &pos);
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &elem);
    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = elem;
    n = n + 1;
}
void del()
{
    printf("\nEnter the position of the element to be deleted: ");
    scanf("%d", &pos);
    elem = a[pos];
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("\nThe deleted element is = %d", elem);
}
void main()
{
    int ch;
    do
    {
        printf("\n\n--------Menu---------- \n");
        printf("1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.Exit\n");
        printf("   ");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        }
    } while (ch != 5);
}