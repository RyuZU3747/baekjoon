r[500001];c[500001];main(n,m,q,a,x,v,i,j){scanf("%d%d%d",&n,&m,&q);for(int i=0;i<q;i++){scanf("%d%d%d",&a,&x,&v);(a==1)?(r[x]+=v):(c[x]+=v);}for(i=1;i<=n;i++){for(j=1;j<=m;j++){printf("%d ",r[i]+c[j]);}printf("\n");}}