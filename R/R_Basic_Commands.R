------------------------------------------------Vector------------------------------------------------

# Poker winnings from Monday to Friday
poker_vector <- c(140,-50,20,-120,240)
# Roulette winnings from Monday to Friday
roulette_vector <- c(-24,-50,100,-350,10)
# Name poker and roulette
days_vector <- c("Monday","Tuesday","Wednesday","Thursday","Friday")
names(roulette_vector) <- days_vector
names(poker_vector) <- days_vector

# What days of the week did you make money on poker?
selection_vector <- poker_vector > 0

selection_vector
# Select from poker_vector these days
poker_winning_days <- poker_vector[selection_vector]
poker_winning_days

------------------------------------------------Lists------------------------------------------------
  
# Construct list with these different elements
my_vector <- 1:10 
my_matrix <- matrix(1:9,ncol=3)
my_df     <- mtcars[1:10,] 

my_list <- list(VECTOR=my_vector,MATRIX=my_matrix,DATAFRAME=my_df)
my_list


------------------------------------------------Matrix------------------------------------------------
  
  
# Creating Matrix
plank <- 1:8
dim(plank) <- c(2,4)
plank

matrix_x <- matrix(1:9,nrow=3,byrow=T)
matrix_x  
  
# Creating Matrix from Vectors  
# Box office Star Wars: In Millions!, The first element: US, Second element: Non-US 
new_hope <- c(460.998007, 314.4)
empire_strikes <- c(290.475067, 247.900000)
return_jedi <- c(309.306177,165.8)

star_wars_matrix = matrix(c(new_hope,empire_strikes,return_jedi), nrow=3, byrow=TRUE) 
star_wars_matrix

# Wont give matrix
x <- c(new_hope,empire_strikes,return_jedi)
x

# Adding row and column names using rownames,colnames 
rownames(star_wars_matrix) <- c("A New Hope", "The Empire Strikes Back", "Return of the Jedi")
colnames(star_wars_matrix) <- c("US", "non-US")

# Adding row and column names using dimnames
box_office_all <- c(461, 314.4,290.5, 247.9,309.3,165.8)
movie_names <- c("A New Hope","The Empire Strikes Back","Return of the Jedi")
col_titles <- c("US","non-US")
star_wars_matrix <- matrix(box_office_all, nrow=3, byrow=TRUE, dimnames=list(movie_names,col_titles))
star_wars_matrix 


# Calculating Sum of rows and columns
# Worldwide box office figures for the three movies
worldwide_vector <- rowSums(star_wars_matrix)   #NOTE: colSums, rowSums - case sensitive
worldwide_vector
# Sales in US vs non-US
sales_in_US_and_non_US <- colSums(star_wars_matrix)
sales_in_US_and_non_US

#Adding a columns and rows to Matrix
all_wars_matrix <- cbind(star_wars_matrix, worldwide)
all_wars_matrix



------------------------------------------------Factor------------------------------------------------

chests <- c('gold', 'silver', 'gems', 'gold', 'gems')
types <- factor(chests)
types
levels(types)

weights <- c(300, 200, 100, 250, 150)
prices <- c(9000, 5000, 12000, 7500, 18000)

plot(weights, prices, pch=as.integer(types))
legend("topright", c("gems", "gold", "silver"), pch=1:3)
legend("topright", levels(types), pch=1:length(levels(types)))



# Nominal and Ordinal categorical value
animals_vector <- c("Elephant", "Giraffe", "Donkey","Horse")
temperature_vector <- c("High","Low","High","Low","Medium")

factor_animals_vector <- factor(animals_vector)
factor_animals_vector
factor_temperature_vector <- factor(temperature_vector, order=TRUE, levels=c("Low","Medium","High"))
factor_temperature_vector



# Changing level names in factors
survey_vector <- c("M","F","F","M","M")
factor_survey_vector <- factor(survey_vector)
# Remember to follow the correct order when assigning new factor levels
levels(factor_survey_vector) <- c("Female","Male")





------------------------------------------------Data Frames------------------------------------------------

# Reading from csv file
read.csv("file_name.csv")
# reading from other formats
read.table("table_name.txt", sep="\t", header=TRUE)


# Data frames basic commands
planets     <- c("Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune");
type        <- c("Terrestrial planet","Terrestrial planet","Terrestrial planet","Terrestrial planet","Gas giant","Gas giant","Gas giant","Gas giant")
diameter    <- c(0.382,0.949,1,0.532,11.209,9.449,4.007,3.883); 
rotation    <- c(58.64,-243.02,1,1.03,0.41,0.43,-0.72,0.67);
rings       <- c(FALSE,FALSE,FALSE,FALSE,TRUE,TRUE,TRUE,TRUE);

# Create the data frame
planets_df  <- data.frame(planets,type,diameter,rotation,rings)

# Selecting data frame elements
closest_planets_df <- planets_df[1:3,]
furthest_planets_df <- planets_df[6:8,]
furthest_planets_diameter <- planets_df[3:8,"diameter"]

# Select the information on planets with rings
rings_vector <- planets_df[,"rings"]
planets_with_rings_df <- planets_df[rings_vector,]

# Select the information on planets with rings using subset command
subset(planets_df, subset=(planets_df$rings == TRUE))
# Planets that are smaller than the Earth using subset command
small_planets_df  <- subset(planets_df, subset = (planets_df$diameter<1))



x <- data.frame("SN"=1:2,"Age"=c(21,15),"Name"=c("John","Dora"),stringsAsFactors=FALSE)
str(x)   

head(trees,n=3)
trees[10:12,2, drop=FALSE]

---------------------------------------------------MISC----------------------------------------------------  
  
DateConvert = as.Date(strptime(mvt$Date, "%m/%d/%y %H:%M"))



plot(x_axis_component,y_axis_component,pch=as.integer(factor_name))
legend("topright",levels(factor_name),pch=1:length(levels(factor_name)))
abline(h=height_y)
abline(v=vertical_x)


setwd("C:/Users/mrajeev/Downloads/R/Workdir")
getwd()
ls()
rm()












