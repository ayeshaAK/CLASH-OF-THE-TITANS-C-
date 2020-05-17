
#include "Shape.cpp"
#include "TwoDPoint.cpp"
#include "ThreeDPoint.cpp"
#include "TwoDShape.cpp"
#include "ThreeDShape.cpp"
#include "Circle.cpp"
#include "Square.cpp";
#include "Sphere.cpp";
#include "Cube.cpp";
#include "Tetrahedron.cpp";
#include "Triangle.cpp";
#include "ShapeFactory.cpp";
#include <gtest/gtest.h>


// ____________________________QUESTION 1 ___________________________________________

TEST(Q1, Shape) { 

    Shape s("Red");
    string s1="Red";
    ASSERT_EQ(0, s1.compare(s.toString()));

}
    //--------------------------------------------------

    TEST(Q1, TwoDPointandShape)
{ 

    TwoDPoint p1(2.2,5.2);
    TwoDShape s2("Yellow",2.2,5.2);
    ASSERT_EQ(p1.getX(), s2.getPosition().getX());
    ASSERT_EQ(p1.getY(), s2.getPosition().getY());
}
    //----------------------------------------------------
    TEST(Q1, ThreeDPointandShape)
     { 
    ThreeDPoint p2(2.2,5.2,2.2);
    ThreeDShape s3("Yellow",2.2,5.2,2.2);
    ASSERT_EQ(p2.getX(), s3.getPosition().getX());
    ASSERT_EQ(p2.getY(), s3.getPosition().getY());
    ASSERT_EQ(p2.getZ(), s3.getPosition().getZ());
    }

    //----------------------------------------------------
    TEST(Q1, Cirlce) { 

    Circle c1("Red", 1.1, 1.1 , 2.2) ;
    string cs="Red Circle Position:(1.1,1.1) Radius:2.2 Perimeter:13.816 Area:15.1976";
    string cs1=c1.toString();
    ASSERT_EQ(0, cs.compare(cs1));

    }
//--------------------------------------------------------------
TEST(Q1, Square) { 

Square s1("Red", 1.1, 1.1 , 2.2) ;
string ss="Red Square Position:(1.1,1.1) Side:2.2 Perimeter:8.8 Area:4.84";
string ss1=s1.toString();
ASSERT_EQ(0, ss.compare(ss1));

}
//--------------------------------------------------------------

TEST(Q1, Triangle) 
{ 

Triangle t1("Green", 1.1, 1.1 , 2.2, 2.2, 2.2) ;
string ts="Green Triangle Position:(1.1,1.1) Side1:2.2 Side2:2.2 Side3:2.2 Perimeter:8.8 Area:4.84";
string ts1=t1.toString();
ASSERT_EQ(0, ts.compare(ts1));

}
//---------------------------------------------------------------

TEST(Q1, Cube)
 { 

Cube c1("Yellow", 1.1, 1.1 , 1.1, 2.2) ;
string cs="Green Cube Position:(1.1,1.1,1,1) Side:2.2 Volume:10.65";
string cs1=c1.toString();
ASSERT_EQ(0, cs.compare(cs1));

}
//---------------------------------------------------------------
TEST(Q1, Sphere) 
{ 

Sphere s1("Yellow", 1.1, 1.1 , 1.1, 2.2) ;
string cs="Green Sphere Position:(1.1,1.1,1,1) Radius:2.2 Volume:44.6";
string cs1=s1.toString();
ASSERT_EQ(0, cs.compare(cs1));
}

//---------------------------------------------------------------
TEST(Q1, Tetrahedron) 
{ 

Tetrahedron t1("Yellow", 1.1, 1.1 , 1.1, 2.2);
string ts="Green Sphere Position:(1.1,1.1,1,1) LengthOfEdge:2.2 Volume:1.25488";
string ts1=t1.toString();
ASSERT_EQ(0, ts.compare(ts1));

}

TEST(Q1, ManualFactory) 
{ 
  ShapeFactory SF;
  SF.getShape();//Loop through the menu to check working of objects creation

}

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
