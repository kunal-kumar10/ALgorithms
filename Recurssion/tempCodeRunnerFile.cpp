int ans;
    if(key<arr[0]){
         ans=search(arr,start,n-1,key);
    }
    else{
        ans= search(arr,0,start-1,key);
    }