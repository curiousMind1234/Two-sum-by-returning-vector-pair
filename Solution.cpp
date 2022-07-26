vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	sort(arr.begin(),arr.end());
  vector<pair<int,int>> res;

  int l=0, r= n-1;
  while(l<r){
      if(arr[l]+arr[r] == target){
          pair<int,int> p(arr[l],arr[r]);
          res.push_back(p);
          l++;
          r--;
      }
      else if(arr[l]+arr[r] < target){
          l++;
      }
      else{
          r--;
      }
  }
  if(res.size()>0) return res;
  else{
      pair<int,int>p(-1,-1);
      res.push_back(p);
      return res;
  }
}
