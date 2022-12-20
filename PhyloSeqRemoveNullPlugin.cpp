#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "PhyloSeqRemoveNullPlugin.h"

void PhyloSeqRemoveNullPlugin::input(std::string file) {
 inputfile = file;
}

void PhyloSeqRemoveNullPlugin::run() {}

void PhyloSeqRemoveNullPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "tr -d \'\\000\' < ";
 myCommand += inputfile + " ";
 myCommand += " > ";
 myCommand += file;
 system(myCommand.c_str());
}

PluginProxy<PhyloSeqRemoveNullPlugin> PhyloSeqRemoveNullPluginProxy = PluginProxy<PhyloSeqRemoveNullPlugin>("PhyloSeqRemoveNull", PluginManager::getInstance());
