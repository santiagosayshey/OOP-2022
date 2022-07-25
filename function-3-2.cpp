// determines the median of a sorted array
#include <iostream>


int median_array(int array[], int n) {

	if (n%2 == 0 || n < 1) {
		return 0;
	}
	
	for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				int temp =array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}

    int median = array[n/2];
    return median;

}