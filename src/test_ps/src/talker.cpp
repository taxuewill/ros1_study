#include "ros/ros.h"
#include "ros/master.h"
#include "ros/network.h"
#include "ros/connection_manager.h"
#include "std_msgs/String.h"

#include <string>
#include <vector>

#include <sstream>

using namespace std;

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{
   
    /**
   * The ros::init() function needs to see argc and argv so that it can perform
   * any ROS arguments and name remapping that were provided at the command line.
   * For programmatic remappings you can use a different version of init() which takes
   * remappings directly, but for most command-line programs, passing argc and argv is
   * the easiest way to do it.  The third argument to init() is the name of the node.
   *
   * You must call one of the versions of ros::init() before using any other
   * part of the ROS system.
   */
    ros::init(argc, argv, "talker");
    std::cout << "ros::master::check()" << ros::master::check() << std::endl; 
    std::cout << "port is " << ros::network::getTCPROSPort() << std::endl;
    std::cout << "connection port is " << ros::ConnectionManager::instance()->getTCPServerTransport() << std::endl;
    /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
//     ros::NodeHandle n;

//     string workspace;
//     n.getParam("/test_ps/workspace",workspace);
//     ROS_INFO("param text is %s",workspace.c_str());
//     int mini_left;
//     n.getParam("test_ps/mini_left",mini_left);
//     ROS_INFO("mini-left is %d",mini_left);
//     int duration = -1;
//     n.getParam("test_ps/duration",duration);
//     ROS_INFO("duration is %d",duration);
//     vector<string> filter_topics;
//     n.getParam("test_ps/filter_topics",filter_topics);
//     ROS_INFO("filter_topics size %d",filter_topics.size());

//     for(const string & temp: filter_topics){
//         ROS_INFO("filter_topic : %s",temp.c_str());
//     }

//     ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

//     ros::Rate loop_rate(10);

//     /**
//    * A count of how many messages we have sent. This is used to create
//    * a unique string for each message.
//    */
//     int count = 0;
//     while (ros::ok())
//     {
//         /**
//      * This is a message object. You stuff it with data, and then publish it.
//      */
//         std_msgs::String msg;

//         std::stringstream ss;
//         ss << "hello world " << count;
//         msg.data = ss.str();

//         ROS_INFO("%s", msg.data.c_str());

//         /**
//      * The publish() function is how you send messages. The parameter
//      * is the message object. The type of this object must agree with the type
//      * given as a template parameter to the advertise<>() call, as was done
//      * in the constructor above.
//      */
//         chatter_pub.publish(msg);

//         ros::spinOnce();

//         loop_rate.sleep();
//         ++count;
//     }

    return 0;
}