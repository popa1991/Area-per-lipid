//  MY FIRST TIME EVER PROGRAM !!
//  Created by Phu K. Tang on 05/18/2017.
//  Copyright © 2017 Phu K. Tang. All rights reserved.

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
    int i,j,f,k,l;
    double coord[i][j];
    double total = 0, area, avg;
    string filename;
    ifstream inFile;
    
    cout << "Enter the name of the file: " << endl;
    cin >> filename;
    inFile.open(filename.c_str());
    if (inFile.fail())
    {
        cout << "The file named " << filename << " cannot be opened. Check if the file exists." << endl;
        exit(1);
    }
    
    cout << "\nOpen " << filename << " successfully." << endl;
    cout << "\nEnter the numbers of frames: " << endl;
    cin >> f;
    cout << "\nEnter the numbers of lipids: " << endl;
    cin >> l;
    
    for (i=0; i < f; i++)
    {
        for (j = 1; j < 3; j++)
        {
            inFile >> coord[i][j];
           // cout << "i = " << i << " j = " << j << " " << coord[i][j] << endl;
            area = coord[i][j]*coord[i][j-1]/l;
        }
        //cout << "\nArea per lipid = " << area << endl;
        total = total + area ;
        
    }
    avg = total / f ;
    cout << "Total Area = " << total << endl;
    cout << "Average Area per Lipid = " << avg << endl;
    
    inFile.close();
    
    return 0;
}

