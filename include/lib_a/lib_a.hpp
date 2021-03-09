/*
 * Copyright (c) 2021 LACIT. All rights reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *Created by illidansr on 09.03.2021.
 * @details
 * @file
 * @brief
 */
#ifndef SANITAIZER_EXAMPLE_LIB_A_HPP
#define SANITAIZER_EXAMPLE_LIB_A_HPP

int* alloc_memory_not_free(int size_mem) {
    int* mem_part = new int[size_mem];
    return mem_part;
}

#endif //SANITAIZER_EXAMPLE_LIB_A_HPP
