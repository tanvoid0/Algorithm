#include <stdio.h>
int t, n, mini, maxi;
int a[20], b[20];
int vis[20];

void input()
{
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		vis[i] = 0;
	}
}
int findleft(int i)
{
	int j;
	for (j = i - 1; j >= 0; j--)
	{
		if (vis[j] == 0)
		{
			//printf(" left : %d\n", vis2[j]);
			return a[j];
		}
	}
	return 0;
}
int findright(int i)
{
	int j;
	for (j = i + 1; j < n; j++)
	{
		if (vis[j] == 0)
		{
			//printf("right : %d\n", vis2[j]);
			return a[j];
		}
	}
	return 0;
}

void solve(int score)
{
	int j;
	for (j = 0; j < n; j++)
	{
		if (vis[j] == 0)
		{

			vis[j] = 1;
			int left = findleft(j);
			int right = findright(j);
			if (left && right)
				solve(score + left * right);
			else if (left)
				solve(score + left);
			else if (right)
				solve(score + right);
			if (score > maxi)
				maxi = score;

			vis[j] = 0;
		}
	}
}
void solvecase()
{
	mini = 0;
	maxi = 0;
	solve(0);
}
void print()
{
	printf("%d\n", maxi);
}
int main()
{
	int i;
	freopen("balloon_input.txt", "r", stdin);
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		input();
		solvecase();
		print();
	}
}
