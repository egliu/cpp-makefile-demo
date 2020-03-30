#include <stdio.h>
#include <stdlib.h>
// #include <ctime>
#include <time.h>

#include <iostream>
#include <string>
#include <vector>

using std::string;

int main(int argc, char *argv[]) {
  string earlist_time = "2019/01/01 18:12:14";
  tm *time_info = new tm();
  strptime(earlist_time.data(), "%Y/%M/%D %H:%M:%S", time_info);
  std::cout << "Year = " << (time_info->tm_year + 1900) << std::endl;
  std::cout << "Month = " << (time_info->tm_mon + 1) << std::endl;
  std::cout << "Day = " << (time_info->tm_yday + 1) << std::endl;
  std::cout << "Hour = " << time_info->tm_hour << std::endl;
  std::cout << "Min = " << time_info->tm_min << std::endl;
  std::cout << "Sec = " << time_info->tm_sec << std::endl;
  std::cout << asctime(time_info) << std::endl;
  return 0;
}