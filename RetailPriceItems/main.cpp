#include <iostream>
    //void inputPrice(double price)
    //this prompts the user to enter the price of a selected item

    //void ComputeFinalPrice(double price, double rate)
    //computes the price of an item alongside its rate

    //void outputResults(double output)
    //shows the results of our computation

        const double rate = 0.05;
        const double rateTwo = 0.10;
        const int THRESHOLD = 7;
    void inputPrice(double& price, int& days)
    {
        using namespace std;
        cout<<"Welcome to Shoprite! Lower prices you can trust, always!\n"
            <<"Enter the price of your item: ";
        cin>>price;

        cout<<"Number of days: ";
        cin>>days;
    }


    void outputResult(double priceTag, int days, double retailPrice)
    {
        using namespace std;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout<<"Wholesale cost = $"<<priceTag<<endl
        <<"Expected time until sold = "
        <<days<<" days"<<endl
        <<"Retail price = $"<<retailPrice<<endl;
        cout<<"That's all!";
    }

    double computeFinalPrice(double& priceTagging, int& daysLast)
    {
        using namespace std;

        if(daysLast <= THRESHOLD)
        {
            return priceTagging + (priceTagging * rate);
        }
        else
        {
            return priceTagging + (priceTagging * rateTwo);
        }
    }
    int main()
    {
        using namespace std;
        double wholesaleCost, retail_Price;
        int shelfTime;

        inputPrice(wholesaleCost, shelfTime);
        retail_Price = computeFinalPrice(wholesaleCost, shelfTime);
        outputResult(wholesaleCost, shelfTime, retail_Price);

        return 0;
    }
