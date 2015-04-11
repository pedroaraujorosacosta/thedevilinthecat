#include <vector>
#include "Node.h"

#ifndef _PROGRAM_NODE_H_
#define _PROGRAM_NODE_H_

namespace GeneratorNodes
{
	class ProgramNode : public Node
	{
		std::vector<Node*> sequence;
	public:
		ProgramNode(std::vector<Node*>& sequence);
		~ProgramNode();

		std::vector<Node*> getSequence() const;
		const Node* getConsequent(const Node* antecedent) const;
		std::string getName() const;

		virtual void print() const;
	};
}
#endif