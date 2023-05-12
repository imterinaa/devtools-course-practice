// Copyright 2023 Terina Alina

#include "include/Function_Eyler.h"
#include <gtest/gtest.h>
#include <utility>

int Function_Eyler::Function_Euler(int n) {
        int c, k, l;

        if (n > 0)
        {
            c = 1;
            for (int i = 2; i < n; i++)
            {
                k = n;
                l = i;
                do
                {
                    if (k > l)
                    {
                        k = k - l;
                    }
                    if (k < l)
                    {
                        l = l - k;
                    }
                } while (k != l);

                if (k == 1)
                {
                    c++;
                }
            }
           
        }
        else{
            throw n;
        }

        return c;
    }