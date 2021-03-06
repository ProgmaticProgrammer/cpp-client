/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef VOTES_H
#define VOTES_H

#include "api/base.h"
#include "api/paths.h"

namespace Ark {
namespace Client {
namespace api {
/**/
class IVotes : public Base {
 public:
  virtual ~IVotes() {}

  virtual std::string get(const char* const identifier) = 0;
  virtual std::string all(const char* const query) = 0;

 protected:
  IVotes(Host& host, IHTTP& http) : Base(host, http) {}
};

/**/

class Votes : public IVotes {
 public:
  Votes(Host& host, IHTTP& http) : IVotes(host, http) {}

  std::string get(const char* const identifier) override;
  std::string all(const char* const query) override;
};

}  // namespace api
}  // namespace Client
}  // namespace Ark

#endif
