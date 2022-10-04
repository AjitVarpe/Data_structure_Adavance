bool isPosible(vector<int> arr, int n, int m,int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i= 0;i<arr.size();i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid ){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

//     int s=0,sum=0;
//     for(int i=0;i<arr.size();i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int mid = s +(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(isPosible(arr,n,m,mid)){
//             ans = mid;
//             e = mid -1;
//         }
//         else{
//             s = mid +1;
//         }
//      mid = s +(e-s)/2;   
//     }
//     return ans;


int findLargestMinDistance(vector<int> &boards, int k)
{
    int ans = -1,s = 0 , e = 0,sum;
    for(int i=0;i<boards.size();i++){
        sum += boards[i];
    }
    e  = sum;
    int mid = s + (e -s)/2;
    while(s<=e){
        if(isPosible(boards,boards.size(),k,mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}