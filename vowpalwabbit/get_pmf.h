// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.

#pragma once
#include "learner.h"

namespace VW
{
namespace continuous_action
{
// Setup reduction in stack
LEARNER::base_learner* get_pmf_setup(config::options_i& options, vw& all);
}  // namespace continuous_action
}  // namespace VW
