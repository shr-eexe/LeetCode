class Solution{
public:
    void merge(vector<int>&a,int left,int mid,int right){
        int n1=mid-left+1;
        int n2=right-mid;
        vector<int>L(n1),R(n2);
        for(int i=0;i<n1;i++){
            L[i]=a[left+i];
        }
        for(int j=0;j<n2;j++){
            R[j]=a[mid+1+j];
        }
        int i=0,j=0,k=left;
        while(i<n1&&j<n2){
            if(L[i]<=R[j]){
                a[k++]=L[i++];
            }
            else{
                a[k++]=R[j++];
            } 
        }
        while(i<n1){
            a[k++]=L[i++];
        }
        while(j<n2){
            a[k++]=R[j++];
        }
    }

    void mergeSort(vector<int>&a,int left,int right){
        if(left<right){
            int mid=(left+right)/2;
            mergeSort(a,left,mid);
            mergeSort(a,mid+1,right);
            merge(a,left,mid,right);
        }
    }

    int majorityElement(vector<int>&nums){
        int n=nums.size();
        mergeSort(nums,0,n-1);
        int max=1,count=1,element=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                if(count>max){
                    max=count;
                    element=nums[i-1];
                }
                count=1;
            }
        }
        if(count>max){
            element=nums[n-1];
        }
        return element;
    }
};
