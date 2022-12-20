#ifndef PHYLOSEQREMOVENULLPLUGIN_H
#define PHYLOSEQREMOVENULLPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class PhyloSeqRemoveNullPlugin : public Plugin
{
public: 
 std::string toString() {return "PhyloSeqRemoveNull";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
