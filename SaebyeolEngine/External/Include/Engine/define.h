#pragma once

#define Single(classtype) private:\
						  classtype();\
						  ~classtype();\
						  friend class Singleton<classtype>;