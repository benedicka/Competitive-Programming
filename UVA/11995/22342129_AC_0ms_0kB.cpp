#include<stdio.h>
int heap[1010],count,v[1010],stack[1010];
bool pq,q,s;

void insert(int x)
{
	count++;
	heap[count]=x;
	int Idx=count;
	while(Idx!=1 && heap[Idx/2]<heap[Idx])
	{
		int temp=heap[Idx];
		heap[Idx]=heap[Idx/2];
		heap[Idx/2] = temp;
		Idx = Idx/2;
	}

}


void heapDown(int Idx)
{
	int curIdx= Idx;
	int curHeap = heap[Idx];
	if((2*Idx)<=count && curHeap<heap[Idx*2]){
		curIdx = Idx*2;
		curHeap =heap[Idx*2];
	}
	if((2*Idx+1)<=count && curHeap<heap[Idx*2+1]){
		curIdx = Idx*2+1;
		curHeap =heap[Idx*2+1];
	}
	if(curIdx==Idx){
		return;
	}
	int temp= heap[curIdx];
	heap[curIdx] = heap [Idx];
	heap [Idx] = temp;
	heapDown(curIdx);
}

int gettop()
{
	if(count==1){
		count--;
		return heap[1];
	}
	int rootValue=heap[1];
	heap[1]=heap[count];
	count--;
	heapDown(1);
	return rootValue;
}

int main()
{
	int n,c,heads,x,cnt,headq,sz;
	while(scanf("%d",&n)!=EOF)
	{
		pq =q =s = 1;
		int idx = 0;
		heads = headq =sz=count=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&c);
			
			if(c==1)
			{
				scanf("%d",&v[idx++]);
		//		printf("q = %d x = %d\n",c,x);
				sz++;
				insert(v[idx-1]);
				stack[heads++] = v[idx-1];
			}	
			else
			{
				scanf("%d",&x);
				if(sz>0)
				{
					sz--;
					int tmp = gettop();
				//	printf("pq = %d s = %d q = %d IDXS = %d IDXQ = %d\n",tmp,v[heads],v[headq],heads,headq);
					if(tmp!=x) pq = 0;
					if(stack[heads-1]!=x) s = 0;
					heads--;
					if(v[headq++]!=x) q = 0;
				}
				else
				{
					pq = s = q = 0;
				}
			}					
		}
		if(pq+s+q>1) printf("not sure\n");
		else if(pq+s+q==0) printf("impossible\n");
		else if(pq) printf("priority queue\n");
		else if(s) printf("stack\n");
		else printf("queue\n");
	}
	return 0;
}