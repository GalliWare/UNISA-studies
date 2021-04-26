// Basic program that will increase a set recipes ingredients by the number input
// recipe is thanks to https://www.bbcgoodfood.com/recipes/vegan-mac-n-cheese
#include <iostream>
using namespace std;

// function to display the Name of the recipe and a reference to where I found the recipe.
void displayName()
{
  cout << "Vegan mac 'n' cheese" << endl;
  // extra endl to make the output easier to read
  cout << "recipe is thanks to https://www.bbcgoodfood.com/recipes/vegan-mac-n-cheese" << endl
       << endl;
}

// function to display the method to cooking the recipe
void displayMethod(int factor)
{
  // set the starting value of the amount of oil that is displayed in the method
  int oil = 60;
  // if the factor multiplier is not 0 then we multiple it be the value of the factor.
  if (factor)
  {
    oil = oil * factor;
  };

  // output the method of cooking the meal
  cout << "Method" << endl;
  cout << "STEP 1" << endl;
  cout << " The night before, soak the cashew nuts in water and leave overnight." << endl;

  cout << "STEP 2" << endl;
  cout << " Heat the oven to 180C/160C fan/gas 4." << endl;
  cout << " Steam the carrots and potatoes together for 5 mins, until completely softened. " << endl;
  cout << " Transfer to a food processor. " << endl;
  cout << " Drain the cashews and add these with " << oil << "ml of the oil, then blitz to break down the nuts. " << endl;
  cout << " Tip in the other ingredients (apart from the macaroni, breadcrumbs and the remaining oil)" << endl;
  cout << "then blitz again until the mixture is smooth and season well. " << endl;
  cout << " Add a splash of water and just a drizzle of olive oil if it looks too stiff, then set aside." << endl;

  cout << "STEP 3" << endl;
  cout << " Cook the macaroni in a large pan of salted water for 1 min less than packet instructions, drain then stir through the sauce. " << endl;
  cout << " Transfer the mix to an ovenproof dish, stir the breadcrumbs with the remaining oil and some seasoning. " << endl;
  // extra endl to make the output easier to read
  cout << " Scatter over the top of the macaroni and bake for 20-25 mins until piping hot and crisp." << endl
       << endl;
}

void displayIngredients(int multiplier)
{
  // set the amount of ingredients we have in the recipe. then we set all the recipe values.
  const int NUM_INGREDIENTS = 12;
  int ingredients[NUM_INGREDIENTS] = {160, 200, 700, 90, 40, 1, 4, 1, 1, 1, 400, 3};
  // use a for loop to multiple each of the ingredients by the multiplier factor set in the input
  for (int i = 0; i < NUM_INGREDIENTS; i++)
  {
    ingredients[i] = ingredients[i] * multiplier;
  };

  // output the ingredients to the console
  cout << "Ingredients" << endl;
  cout << " " << ingredients[0] << "g raw cashews" << endl;
  cout << " " << ingredients[1] << "g carrots, peeled and cut into 1cm cubes" << endl;
  cout << " " << ingredients[2] << "g potatoes, peeled and cut into 1cm cubes" << endl;
  cout << " " << ingredients[3] << "ml olive oil" << endl;
  cout << " " << ingredients[4] << "g nutritional yeast" << endl;
  cout << " " << ingredients[5] << " lemon, juice only" << endl;
  cout << " " << ingredients[6] << " garlic cloves, peeled and roughly chopped" << endl;
  cout << " " << ingredients[7] << " tbsp Dijon mustard" << endl;
  cout << " " << ingredients[8] << " tbsp white wine vinegar" << endl;
  cout << " " << ingredients[9] << " tsp cayenne pepper" << endl;
  cout << " " << ingredients[10] << "g macaroni" << endl;
  // extra endl to make the output easier to read
  cout << " " << ingredients[11] << " tbsp panko breadcrumbs" << endl
       << endl;
}

int main()
{
  // set the factor value. Using 0 so that it doesn't get a random value.
  int mFactor = 0;
  // ask the user to input a new factor value. Let them know that 1 will give them the original values of the recipe.
  cout << "Please enter the factor to multiply the ingredients with." << endl;
  cout << "If you would like to see the original recipe enter 1" << endl;
  cout << "Enter Number: ";
  cin >> mFactor;
  // set a while loop for if the user tries to use a negative multiplier value.
  while (mFactor < 0)
  {
    cout << "Please enter a new number great then 0: ";
    cin >> mFactor;
  };
  // used to break up the console look to make it easier to read
  cout << endl;

  displayName();
  displayIngredients(mFactor);
  displayMethod(mFactor);

  return 0;
}